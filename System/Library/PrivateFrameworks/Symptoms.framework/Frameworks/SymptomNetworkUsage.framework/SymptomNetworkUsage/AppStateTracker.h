@class NSString, NSUUID;

@interface AppStateTracker : NSObject

@property (retain) NSString *identifier;
@property (retain) NSUUID *uuid;
@property int pid;
@property BOOL foreground;

- (void).cxx_destruct;
- (id)description;

@end
