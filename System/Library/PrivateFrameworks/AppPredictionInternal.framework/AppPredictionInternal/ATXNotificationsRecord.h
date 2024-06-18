@class NSNumber, NSString, ATXNotificationContext, NSDate, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface ATXNotificationsRecord : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _finished;
    long long _outcome;
    long long _endingInteraction;
    NSDate *_publicationDate;
    NSString *_categoryID;
    NSString *_title;
    NSString *_subtitle;
    NSString *_message;
    NSNumber *_numSuppActions;
    NSNumber *_timezone;
    unsigned long long _incomingFeed;
    BOOL _hidden;
    NSDate *_activatedTime;
    NSDate *_unlockedTime;
}

@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *notificationId;
@property (retain, nonatomic) ATXNotificationContext *ctx;
@property (retain, nonatomic) NSDate *creationTime;
@property (retain, nonatomic) NSMutableArray *stream;

+ (BOOL)isNotificationMetadataFromLockscreen:(id)a0;
+ (id)serializeMetadata:(id)a0 error:(id)a1;

- (id)pbmsg;
- (id)init;
- (id)initWithSerializedMetadata:(id)a0 notificationID:(id)a1 timestamp:(id)a2;
- (long long)determineOutcome;
- (long long)getEndingInteraction;
- (BOOL)isCleared;
- (BOOL)hasGivenEventType:(long long)a0;
- (void)start;
- (BOOL)isIgnored;
- (id)pbmsgWithGrade:(id)a0 userId:(id)a1;
- (id)message;
- (void).cxx_destruct;
- (id)messageWithGrade:(id)a0 userid:(id)a1;
- (long long)findNextEventInStreamAndRecordTime:(id)a0 forType:(long long)a1;
- (id)json:(BOOL)a0;
- (long long)getOutcome;
- (BOOL)isEngagement;
- (id)initWithATXNotificationsInterface:(id)a0 notificationID:(id)a1 timestamp:(id)a2 motion:(id)a3;
- (BOOL)addEvent:(id)a0;
- (BOOL)hasTappedCoalesceAndIsTopOfPile;
- (BOOL)isExpired;
- (id)getSerializedMetadata;
- (BOOL)isOnLockscreen;
- (BOOL)hasDeviceStateChanged:(long long)a0;
- (long long)determineEndingInteraction;
- (BOOL)hasOrbed;

@end
