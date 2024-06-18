@protocol SBDisplayControlling;

@interface SBDisplayControllerInfo : NSObject

@property (readonly, nonatomic) id<SBDisplayControlling> displayController;
@property (readonly, nonatomic) long long windowingMode;
@property (readonly, nonatomic) unsigned long long priorityLevel;
@property (readonly, nonatomic) unsigned long long deactivationReasons;

- (void).cxx_destruct;
- (id)description;
- (id)initWithController:(id)a0 windowingMode:(long long)a1 priorityLevel:(unsigned long long)a2 deactivationReasons:(unsigned long long)a3;

@end
