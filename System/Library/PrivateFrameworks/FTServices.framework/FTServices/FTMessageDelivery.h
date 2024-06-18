@class NSString, IDSBaseMessage, NSArray, FTMessageQueue, NSNumber, IMTimer;

@interface FTMessageDelivery : NSObject <FTMessageQueueDelegate> {
    unsigned int _retries;
    FTMessageQueue *_queue;
    IMTimer *_timer;
}

@property (copy) NSString *userAgent;
@property (copy) NSNumber *protocolVersion;
@property (readonly) BOOL hasQueuedItems;
@property (readonly) BOOL busy;
@property BOOL retryInAirplaneMode;
@property BOOL logToRegistration;
@property (readonly) IDSBaseMessage *currentMessage;
@property (readonly) NSArray *queuedMessages;
@property (readonly) NSArray *allMessages;
@property (readonly) long long maxMessageSize;
@property (readonly) long long maxLargeMessageSize;
@property unsigned long long maxConcurrentMessages;
@property (nonatomic) BOOL disallowRetry;

+ (id)alloc;
+ (Class)HTTPMessageDeliveryClass;
+ (id)_errorForTDMessageDeliveryStatus:(long long)a0 userInfo:(id)a1;
+ (Class)APNSMessageDeliveryClass;

- (void)cancelMessage:(id)a0;
- (void)queue:(id)a0 hitTimeoutForMessage:(id)a1;
- (id)init;
- (id)_queue;
- (void)_correctServerTimestampForDriftOnMessage:(id)a0 currentDate:(id)a1;
- (void)_clearRetryTimer;
- (void)_setRetryTimer:(double)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_signMessage:(id)a0 useDataSignatures:(BOOL)a1 body:(id)a2 queryString:(id)a3 intoDictionary:(id)a4;
- (BOOL)sendMessage:(id)a0;
- (void)_informDelegateAboutMessage:(id)a0 error:(id)a1 result:(id)a2 resultCode:(long long)a3;
- (void)_retryTimerHit:(id)a0;
- (void)dealloc;
- (void)networkStateChanged;
- (BOOL)_sendMessageAsynchronously:(id)a0 error:(id *)a1;

@end
