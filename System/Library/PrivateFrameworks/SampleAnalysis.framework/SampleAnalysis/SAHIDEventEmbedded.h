@interface SAHIDEventEmbedded : SAHIDEvent

+ (id)classDictionaryKey;
+ (void)parseKTrace:(struct ktrace_session { } *)a0 findingHIDEvents:(id /* block */)a1;

- (id)hidEventTypeString;
- (double)thresholdToGroupSameEventType;

@end
