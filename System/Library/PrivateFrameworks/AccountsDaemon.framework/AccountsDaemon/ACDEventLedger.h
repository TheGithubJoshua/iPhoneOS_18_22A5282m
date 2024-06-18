@class NSMutableArray;

@interface ACDEventLedger : NSObject {
    char *_crashInfoString;
}

@property (retain) NSMutableArray *eventLedger;

+ (id)sharedLedger;

- (id)init;
- (void)simulateCrashWithMessage:(id)a0;
- (void).cxx_destruct;
- (id)historyDescription;
- (void)recordEvent:(id)a0;

@end
