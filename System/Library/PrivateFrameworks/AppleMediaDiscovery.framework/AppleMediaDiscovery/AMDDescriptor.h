@class NSData, NSString;

@interface AMDDescriptor : NSManagedObject

@property (retain, nonatomic) NSData *descriptor;
@property (nonatomic) short domain;
@property (copy, nonatomic) NSString *featureName;

+ (id)fetchRequest;
+ (id)getDescriptorsForDomain:(long long)a0 error:(id *)a1;
+ (id)deleteAll:(id *)a0;
+ (id)refreshDescriptors:(id)a0 forDomain:(long long)a1 error:(id *)a2;

@end
