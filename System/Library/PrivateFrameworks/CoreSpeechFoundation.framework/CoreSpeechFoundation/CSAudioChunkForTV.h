@class NSArray;

@interface CSAudioChunkForTV : NSObject

@property (retain, nonatomic) NSArray *packets;
@property (nonatomic) float avgPower;
@property (nonatomic) float peakPower;
@property (nonatomic) unsigned long long timeStamp;
@property (nonatomic) unsigned int numChannels;
@property (nonatomic) unsigned int audioFormat;
@property (nonatomic) unsigned long long streamHandleID;

- (id)xpcObject;
- (id)initWithXPCObject:(id)a0;
- (void).cxx_destruct;

@end
