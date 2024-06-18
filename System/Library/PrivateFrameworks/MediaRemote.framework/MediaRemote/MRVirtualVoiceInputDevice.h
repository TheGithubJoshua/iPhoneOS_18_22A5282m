@class NSData, MRVirtualVoiceInputDeviceDescriptor;

@interface MRVirtualVoiceInputDevice : NSObject

@property (readonly, nonatomic) unsigned int deviceID;
@property (copy, nonatomic) MRVirtualVoiceInputDeviceDescriptor *descriptor;
@property (nonatomic) unsigned int recordingState;
@property (readonly, nonatomic) NSData *data;

- (id)initWithDeviceID:(unsigned int)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithData:(id)a0;

@end
