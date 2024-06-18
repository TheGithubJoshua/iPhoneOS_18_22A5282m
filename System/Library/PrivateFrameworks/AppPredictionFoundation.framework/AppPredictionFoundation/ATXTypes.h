@interface ATXTypes : NSObject

+ (id)consumerMapping;
+ (void)iterConsumerSubTypesWithBlock:(id /* block */)a0;
+ (id)validConsumerTypeList;
+ (id)uiTypeForActionConsumerSubType:(unsigned char)a0;
+ (id)stringForEngagementType:(unsigned long long)a0;
+ (void)iterConsumerTypesWithBlock:(id /* block */)a0;
+ (id)stringForConsumerSubtype:(unsigned char)a0;
+ (id)inverseConsumerSubtypeMapping;
+ (unsigned long long)engagementTypeForString:(id)a0 found:(BOOL *)a1;
+ (id)stringForConsumerType:(unsigned long long)a0;
+ (id)consumerSubtypeMapping;
+ (BOOL)isActionSpotlightConsumerSubType:(unsigned char)a0;
+ (unsigned char)consumerSubtypeForString:(id)a0 found:(BOOL *)a1;
+ (unsigned long long)consumerTypeForString:(id)a0 found:(BOOL *)a1;
+ (id)validConsumerSubTypeList;
+ (id)safeStringForConsumerSubtype:(unsigned char)a0;
+ (id)validConsumerSubTypes;
+ (id)validConsumerTypes;
+ (unsigned long long)consumerTypeForSubType:(unsigned char)a0;

@end
