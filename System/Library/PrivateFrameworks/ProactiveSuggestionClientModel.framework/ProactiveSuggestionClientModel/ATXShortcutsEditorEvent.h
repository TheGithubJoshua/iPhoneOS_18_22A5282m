@class NSUUID, NSArray, ATXShortcutsEditorEventMetadata, NSDate, NSString;

@interface ATXShortcutsEditorEvent : NSObject <ATXProactiveSuggestionUIInteractionProtocol> {
    double _absoluteDate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned char consumerSubType;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) unsigned long long eventType;
@property (retain, nonatomic) NSUUID *blendingCacheUUID;
@property (retain, nonatomic) NSArray *suggestionUUIDs;
@property (retain, nonatomic) ATXShortcutsEditorEventMetadata *metadata;
@property (readonly, nonatomic) unsigned char consumerSubTypeForUIStream;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithCoder:(id)a0;
- (void)updateUIFeedbackSession:(id)a0 uiCacheConsumerSubType:(unsigned char)a1;
- (id)init;
- (id)jsonDict;
- (id)sessionProcessingOptionsForSessionType:(long long)a0;
- (id)sessionIdentifierForSessionType:(long long)a0 uiCacheConsumerSubType:(unsigned char)a1;
- (id)initWithProto:(id)a0;
- (id)json;
- (id)blendingUICacheUpdateUUIDForUICacheConsumerSubType:(unsigned char)a0;
- (id)initWithProtoData:(id)a0;
- (id)serialize;
- (id)proto;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithAbsoluteDate:(double)a0 eventType:(unsigned long long)a1 blendingCacheUUID:(id)a2 suggestionUUIDs:(id)a3 metadata:(id)a4;
- (id)initWithDate:(id)a0 eventType:(unsigned long long)a1 blendingCacheUUID:(id)a2 suggestionUUIDs:(id)a3 metadata:(id)a4;
- (BOOL)isEqualToATXShortcutsEditorEvent:(id)a0;

@end
