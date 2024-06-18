@interface EFPriorityDesignator : NSObject

@property (class, readonly, retain) EFPriorityDesignator *currentDesignator;

@property (nonatomic) unsigned long long priority;

+ (id)currentDesignatorStackIfExists;
+ (void)destroyCurrentDesignator;
+ (id)currentDesignatorStack;
+ (id)pushNewDesignator;
+ (id)currentDesignatorIfExists;
+ (id)installNewDesignator;

@end
