@interface CNVCardUserDefaults : NSObject

+ (BOOL)includeNotesInVCards;
+ (long long)defaultNameOrdering;
+ (id)vCard21Encoding;
+ (long long)integerForKey:(id)a0;
+ (BOOL)includePhotosInVCards;
+ (id)objectForKey:(id)a0;
+ (BOOL)includeUserSettings;
+ (BOOL)isPrivateVCardFieldsEnabled;
+ (BOOL)debugLogEnabled;
+ (BOOL)boolForKey:(id)a0;
+ (id)vCardPrivateFields;
+ (unsigned long long)outputFormat;

@end
