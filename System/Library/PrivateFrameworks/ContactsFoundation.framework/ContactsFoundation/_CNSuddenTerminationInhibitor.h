@class NSProcessInfo;

@interface _CNSuddenTerminationInhibitor : CNInhibitor

@property (retain, nonatomic) NSProcessInfo *processInfo;

- (id)init;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (id)initWithProcessInfo:(id)a0;

@end
