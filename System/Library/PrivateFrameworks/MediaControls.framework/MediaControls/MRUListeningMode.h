@class MPAVOutputDeviceRoute, NSSet, NSString;

@interface MRUListeningMode : NSObject

@property (readonly, nonatomic) MPAVOutputDeviceRoute *outputDeviceRoute;
@property (readonly, nonatomic) NSSet *availableListeningModes;
@property (readonly, nonatomic) NSString *currentListeningMode;

- (id)initWithOutputDeviceRoute:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
