@class NSArray, NSString, NSDictionary;

@interface CAMCaptureCommand : NSObject <NSCopying, NSCoding>

@property (copy, nonatomic) NSArray *subcommands;
@property (copy, nonatomic) NSString *reason;
@property (readonly, nonatomic) BOOL requiresSessionModification;
@property (readonly, copy, nonatomic) NSString *sessionModificationLogReason;
@property (readonly, nonatomic) double sessionModificationMinimumExecutionTime;
@property (readonly, nonatomic) NSDictionary *userInfo;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSubcommands:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)executeWithContext:(id)a0;
- (void)addSubcommand:(id)a0;
- (void)removeSubcommand:(id)a0;

@end
