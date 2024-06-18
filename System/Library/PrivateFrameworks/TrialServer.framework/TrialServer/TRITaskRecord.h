@class NSNumber, NSArray, NSDate;
@protocol TRITask;

@interface TRITaskRecord : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *taskId;
@property (readonly, nonatomic) id<TRITask> task;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSArray *dependencies;
@property (readonly, nonatomic) unsigned long long capabilities;
@property (readonly, nonatomic) NSArray *tags;

+ (void)load;
+ (id)taskRecordWithTaskId:(id)a0 task:(id)a1 startDate:(id)a2 dependencies:(id)a3 capabilities:(unsigned long long)a4 tags:(id)a5;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)_swizzledEncodeWithCoder:(id)a0;
- (id)copyWithReplacementCapabilities:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithReplacementDependencies:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithReplacementTags:(id)a0;
- (BOOL)isEqualToTaskRecord:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithReplacementTaskId:(id)a0;
- (id)copyWithReplacementStartDate:(id)a0;
- (id)initWithTaskId:(id)a0 task:(id)a1 startDate:(id)a2 dependencies:(id)a3 capabilities:(unsigned long long)a4 tags:(id)a5;
- (id)copyWithReplacementTask:(id)a0;

@end
