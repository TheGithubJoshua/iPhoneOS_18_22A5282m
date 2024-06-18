@class BRMangledID;

@interface BRCSyncOperationThrottle : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double delay;
@property (readonly, nonatomic) double nextTry;
@property (readonly, nonatomic) BOOL isSyncDown;
@property (readonly, nonatomic) int lastErrorKind;
@property (retain, nonatomic) BRMangledID *mangledID;

- (id)initWithCoder:(id)a0;
- (void)clear;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)updateForError:(id)a0;
- (id)initWithMangledID:(id)a0 isSyncDown:(BOOL)a1;
- (BOOL)scheduleIfPossibleWithCurrentTimestamp:(long long)a0 signalSourceIfFailed:(id)a1 description:(id)a2;
- (void)updateAfterSchedulingTask;
- (void)updateAfterSchedulingTaskWithMinimumDelay:(double)a0;
- (BOOL)updateForClearingOutOfQuota;

@end
