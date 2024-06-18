@interface WFEvent : NSObject

+ (Class)codableEventClass;
+ (id)serializablePropertyTransformers;

- (id)dictionaryRepresentation;
- (id)description;
- (id)debugDescription;
- (void)track;
- (id)propertyNames;
- (void)trackWithCount:(int)a0;
- (Class)codableEventClass;
- (id)coreAnalyticsKey;
- (id)serializableEvent;

@end
