@class NSString, NSArray, NSDate, ATXSpotlightEventMetadata;

@interface ATXSpotlightEvent : NSObject <ATXProactiveSuggestionUIInteractionProtocol> {
    double _absoluteDate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *date;
@property (nonatomic) int eventType;
@property (retain, nonatomic) NSString *appConsumerSubType;
@property (retain, nonatomic) NSString *actionConsumerSubType;
@property (retain, nonatomic) NSString *appBlendingCacheId;
@property (retain, nonatomic) NSString *actionBlendingCacheId;
@property (retain, nonatomic) NSArray *appSuggestionIds;
@property (retain, nonatomic) NSArray *actionSuggestionIds;
@property (retain, nonatomic) ATXSpotlightEventMetadata *metadata;
@property (readonly, nonatomic) unsigned char consumerSubTypeForUIStream;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewAppearedEventWithSFFeedback:(id)a0 date:(id)a1;
+ (id)viewDisappearedEventWithDidSearch:(BOOL)a0 date:(id)a1;
+ (id)appSuggestionTappedEventWithSuggestion:(id)a0 appBlendingCacheId:(id)a1 currentQuery:(id)a2 date:(id)a3;
+ (id)searchResultTappedWithEngagedBundleId:(id)a0 searchedActionType:(unsigned long long)a1 date:(id)a2;
+ (id)suggestionsAppearedEventWithAppSuggestionIds:(id)a0 actionSuggestionIds:(id)a1 appBlendingCacheId:(id)a2 actionBlendingCacheId:(id)a3 date:(id)a4;
+ (id)actionSuggestionContextMenuDismissOnceEventWithSuggestionId:(id)a0 actionBlendingCacheId:(id)a1 date:(id)a2;
+ (id)actionSuggestionDismissedEventWithSuggestionId:(id)a0 actionBlendingCacheId:(id)a1 date:(id)a2;
+ (id)actionSuggestionTappedEventWithSuggestion:(id)a0 actionBlendingCacheId:(id)a1 currentQuery:(id)a2 date:(id)a3;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithCoder:(id)a0;
- (void)updateUIFeedbackSession:(id)a0 uiCacheConsumerSubType:(unsigned char)a1;
- (id)jsonDict;
- (id)sessionProcessingOptionsForSessionType:(long long)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)sessionIdentifierForSessionType:(long long)a0 uiCacheConsumerSubType:(unsigned char)a1;
- (id)initWithProto:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededFordouble:(double)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)json;
- (id)blendingUICacheUpdateUUIDForUICacheConsumerSubType:(unsigned char)a0;
- (id)initWithProtoData:(id)a0;
- (id)serialize;
- (BOOL)isEqualToATXSpotlightEvent:(id)a0;
- (id)_stringArrayToUUIDArray:(id)a0;
- (id)proto;
- (BOOL)checkAndReportDecodingFailureIfNeededForint32_t:(int)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (void)_updateActionUIFeedbackSession:(id)a0;
- (id)initWithDate:(id)a0 eventType:(int)a1 appConsumerSubType:(id)a2 actionConsumerSubType:(id)a3 appBlendingCacheId:(id)a4 actionBlendingCacheId:(id)a5 appSuggestionIds:(id)a6 actionSuggestionIds:(id)a7 metadata:(id)a8;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithAbsoluteDate:(double)a0 eventType:(int)a1 appConsumerSubType:(id)a2 actionConsumerSubType:(id)a3 appBlendingCacheId:(id)a4 actionBlendingCacheId:(id)a5 appSuggestionIds:(id)a6 actionSuggestionIds:(id)a7 metadata:(id)a8;
- (void)_updateAppUIFeedbackSession:(id)a0;

@end
