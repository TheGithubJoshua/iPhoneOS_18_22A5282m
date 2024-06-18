@interface HDAppSubscriptionEntity : HDHealthEntity

+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (BOOL)setLastAnchor:(id)a0 lastAckTime:(id)a1 forBundleID:(id)a2 dataTypes:(id)a3 profile:(id)a4 error:(id *)a5;
+ (id)uniquedColumns;
+ (id)allSubscriptionsForBundleID:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)subscriptionForBundleID:(id)a0 dataCode:(long long)a1 profile:(id)a2 error:(id *)a3;
+ (long long)protectionClass;
+ (id)tableAliases;
+ (BOOL)setLaunchTimeHysteresis:(id)a0 forBundleID:(id)a1 dataTypes:(id)a2 profile:(id)a3 error:(id *)a4;
+ (BOOL)removeSubscriptionsWithBundleID:(id)a0 dataCode:(long long)a1 profile:(id)a2 error:(id *)a3;
+ (id)allSubscriptionsForType:(long long)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)addSubscriptionWithBundleID:(id)a0 dataCode:(long long)a1 updateFrequency:(unsigned long long)a2 profile:(id)a3 error:(id *)a4;

@end
