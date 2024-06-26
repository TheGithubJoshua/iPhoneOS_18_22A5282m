@class NSDictionary, NSMutableDictionary;

@interface CPLPushChangeTasks : NSObject <NSSecureCoding, NSCopying> {
    NSDictionary *_tasksByType;
    NSMutableDictionary *_mutableTasksByType;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL hasTasks;

+ (id)descriptionForTaskType:(long long)a0;

- (id)initWithCoder:(id)a0;
- (id)initEmpty;
- (id)invalidRecordScopedIdentifiers;
- (id)_descriptionFromTasksByType:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)enumerateTasksWithBlock:(id /* block */)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_commitTasks;
- (void)enumerateScopedTasksWithBlock:(id /* block */)a0;
- (id)invalidRecordIdentifiers;
- (void)addTask:(long long)a0 forRecordWithScopedIdentifier:(id)a1;

@end
