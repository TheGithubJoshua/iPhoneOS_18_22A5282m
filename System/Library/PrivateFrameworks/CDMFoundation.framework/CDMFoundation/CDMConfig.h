@class NSSet, NSOrderedSet, NSString;

@interface CDMConfig : NSObject <NSCopying>

@property (readonly, nonatomic) NSSet *enabledServices;
@property (readonly, nonatomic) NSOrderedSet *availableServiceGraphs;
@property (readonly, nonatomic) NSString *defaultLocaleIdentifier;
@property (readonly, nonatomic) BOOL isCliMode;
@property (readonly, nonatomic) BOOL isFrameworkMode;
@property (readonly, nonatomic) unsigned int maxConcurrentCount;

+ (id)defaultCLIServiceGraph;
+ (id)defaultEnabledServiceGraph;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initForUseByCLI;
- (id)initForUseByCLI:(BOOL)a0 frameworkMode:(BOOL)a1;
- (id)initForUseByCLI:(BOOL)a0 frameworkMode:(BOOL)a1 maxConcurrentCount:(unsigned int)a2;
- (id)initForUseByFramework;
- (void)setEnabledServices:(id)a0;

@end
