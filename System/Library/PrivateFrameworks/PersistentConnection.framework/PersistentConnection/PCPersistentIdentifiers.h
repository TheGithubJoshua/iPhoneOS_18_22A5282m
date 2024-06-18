@interface PCPersistentIdentifiers : NSObject

+ (id)_processNamePrefix;
+ (unsigned long long)hostUniqueIdentifier;
+ (id)processNameAndPidIdentifier;
+ (int)pidFromMatchingIdentifer:(id)a0;
+ (id)processNamePidAndStringIdentifier:(id)a0;

@end
