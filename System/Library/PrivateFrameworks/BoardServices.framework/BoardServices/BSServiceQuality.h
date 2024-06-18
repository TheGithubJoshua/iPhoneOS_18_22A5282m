@class NSString;

@interface BSServiceQuality : NSObject <NSCopying> {
    NSString *_serviceClassName;
    BOOL _singleton;
    BOOL _main;
}

@property (readonly, nonatomic) unsigned int serviceClass;
@property (readonly, nonatomic) int relativePriority;

+ (id)userInitiated;
+ (id)main;
+ (id)background;
+ (id)utility;
+ (id)serviceWithClass:(unsigned int)a0 relativePriority:(int)a1;
+ (id)serviceWithClass:(unsigned int)a0;
+ (id)userInteractive;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
