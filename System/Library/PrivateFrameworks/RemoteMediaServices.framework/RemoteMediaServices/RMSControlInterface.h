@interface RMSControlInterface : NSObject

@property (nonatomic) BOOL supportsSpeakerSelection;
@property (nonatomic) BOOL supportsVolumeControl;
@property (nonatomic) BOOL supportsDirectionalControl;

- (id)initWithProtobuf:(id)a0;
- (id)protobuf;

@end
