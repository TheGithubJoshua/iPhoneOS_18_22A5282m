@class NSArray;

@interface PPTCadence : NSObject

@property (readonly) NSArray *cadenceTuples;

+ (id)cadenceInit;
+ (id)cadenceWithProto:(id)a0;
+ (id)cadenceEventSBC;
+ (id)cadenceWithJSONObject:(id)a0;
+ (BOOL)isValidCadenceJSON:(id)a0;
+ (id)cadenceInit_EventSBC;
+ (id)cadenceEventXPCWithFrequency:(unsigned long long)a0;

- (id)proto;
- (void).cxx_destruct;
- (id)initWithCadenceTuples:(id)a0;

@end
