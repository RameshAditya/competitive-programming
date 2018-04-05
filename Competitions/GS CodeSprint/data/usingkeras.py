import numpy
import pandas
import csv
from keras.models import Sequential
from keras.layers import Dense
from keras.wrappers.scikit_learn import KerasClassifier
from keras.utils import np_utils
from sklearn.model_selection import cross_val_score
from sklearn.model_selection import KFold
from sklearn.preprocessing import LabelEncoder
from sklearn.pipeline import Pipeline

seed = 7
numpy.random.seed(seed)

dataframe = pandas.read_csv("train.csv", header=None)
dataset = dataframe.values

#print(dataset[1:10,:])

X = dataset[1:,0:6].astype(float)
Y = dataset[1:,6]
#print(X[1][1],Y[0][0])

encoder = LabelEncoder()
encoder.fit(Y)
encoded_Y = encoder.transform(Y)
dummy_y = np_utils.to_categorical(encoded_Y)

model = Sequential()
model.add(Dense(4, activation='relu', input_dim = 6))
model.add(Dense(4, activation='softmax', input_dim = 4))
model.compile(loss='categorical_crossentropy',optimizer='adam',metrics=['accuracy'])

model.fit(X, dummy_y, epochs=10, batch_size=10)

testframe = pandas.read_csv("test.csv",header=None)
testset = testframe.values

XX = testset[1:,0:6].astype(float)
sz=len(XX)-1

for i in range(len(XX)):    
    result = model.predict(numpy.array(XX[i]).reshape((1,6)))

    with open('neu.csv','w',newline='') as csvfile:
        wri = csv.writer(csvfile)
        ans, nah = numpy.where(result==numpy.amax(result))
        ans=str(ans)
        res=''
        for ia in ans:
            if ia.isdigit():
                res+=ia
        print('ANS:',str(int(res)+1))
        wri.writerow(str(int(res)+1))    
        
        

    #print(result)
#for res in result[0]:
#    print(res)
