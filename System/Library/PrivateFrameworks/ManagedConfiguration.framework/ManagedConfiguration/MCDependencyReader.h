@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MCDependencyReader : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;
@property (retain, nonatomic) NSMutableDictionary *memberQueueSystemDomainsDict;
@property (retain, nonatomic) NSMutableDictionary *memberQueueUserDomainsDict;

+ (void)setSystemStoragePath:(id)a0 userStoragePath:(id)a1;
+ (id)systemStoragePath;
+ (id)userStoragePath;
+ (id)sharedReader;

- (id)parentsInDomain:(id)a0;
- (id)init;
- (void)invalidateCache;
- (id)memberQueueDependentsOfParent:(id)a0 inSystemDomain:(id)a1;
- (id)systemDomainsDict;
- (id)_init;
- (void)memberQueueRereadUserDomainsDict;
- (id)userDomainsDict;
- (void)memberQueueRereadSystemDomainsDict;
- (id)memberQueueDependentsOfParent:(id)a0 inDomain:(id)a1;
- (void).cxx_destruct;
- (id)dependentsOfParent:(id)a0 inUserDomain:(id)a1;
- (id)dependentsOfParent:(id)a0 inDomain:(id)a1;
- (id)dependentsOfParent:(id)a0 inSystemDomain:(id)a1;
- (id)parentsInUserDomain:(id)a0;
- (id)memberQueueDependentsOfParent:(id)a0 inUserDomain:(id)a1;
- (id)parentsInSystemDomain:(id)a0;
- (id)memberQueueParentsInUserDomain:(id)a0;
- (void)memberQueueRereadDomainsDict;
- (id)memberQueueParentsInSystemDomain:(id)a0;
- (id)memberQueueParentsInDomain:(id)a0;

@end
