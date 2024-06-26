@class NSArray, SSMetricsEventController, NSURL, NSString, NSMutableArray;

@interface SSMetricsEventReportingSession : NSObject {
    long long _insertTimestamp;
    NSURL *_reportingURL;
    NSArray *_unreportedEvents;
    NSMutableArray *_unreportedEventPIDs;
    SSMetricsEventController *_eventController;
    NSString *_sessionCanaryIdentifier;
    BOOL _suppressUserInfo;
}

- (void)_writeString:(id)a0 toData:(id)a1;
- (id)initWithReportingURL:(id)a0 insertTimestamp:(long long)a1 suppressDSID:(BOOL)a2 eventController:(id)a3;
- (id)sessionCanaryIdentifier;
- (id)initWithReportingURL:(id)a0 insertTimestamp:(long long)a1 eventController:(id)a2;
- (BOOL)markEventsAsReported;
- (id)writeEventsToStream:(id)a0;
- (long long)_estimateSizeOfJsonObject:(id)a0;
- (void).cxx_destruct;
- (id)initWithReportingURL:(id)a0 insertTimestamp:(long long)a1 suppressUserInfo:(BOOL)a2 eventController:(id)a3;
- (id)writeEventsToStream:(id)a0 uncompressedMaxSize:(long long)a1;
- (BOOL)anyUnreportedEvents;
- (id)_unreportedEvents;

@end
