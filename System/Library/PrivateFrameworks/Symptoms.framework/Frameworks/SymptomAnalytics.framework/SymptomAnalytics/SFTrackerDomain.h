@class NSString;

@interface SFTrackerDomain : NSManagedObject

@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *domainOwner;

+ (id)fetchRequest;
+ (id)entityName;

@end
