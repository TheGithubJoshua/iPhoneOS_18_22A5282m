@class NSDictionary, NSString, NSMutableDictionary;

@interface PLCoreAnalyticsEvent : NSObject {
    NSString *_event;
    NSMutableDictionary *_mutablePayload;
}

@property (readonly) NSDictionary *payload;

- (void)removeKey:(id)a0;
- (void)publish;
- (void).cxx_destruct;
- (id)description;
- (void)mergePayload:(id)a0;
- (void)addKey:(id)a0 value:(id)a1;
- (id)initWithEvent:(id)a0 payload:(id)a1;

@end
