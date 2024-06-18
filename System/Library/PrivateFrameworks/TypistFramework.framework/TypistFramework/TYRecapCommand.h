@class NSString, RCPSyntheticEventStream;

@interface TYRecapCommand : NSObject

@property (nonatomic) int commandType;
@property (retain, nonatomic) NSString *commandString;
@property (retain, nonatomic) NSString *commandDescription;
@property (retain, nonatomic) RCPSyntheticEventStream *eventStream;
@property (nonatomic) BOOL requiresRecapWaitOverride;
@property (nonatomic) double recapWaitOverrideInterval;

- (void).cxx_destruct;
- (id)description;
- (id)initWithCommandType:(int)a0 commandString:(id)a1 commandDescription:(id)a2;
- (void)updateCommand:(int)a0 commandString:(id)a1 commandDescription:(id)a2;

@end
