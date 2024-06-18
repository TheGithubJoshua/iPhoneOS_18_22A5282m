@class NSArray;

@interface FCModifyRecordsCommand : FCCommand {
    BOOL _merge;
    id /* block */ _localRecordsGenerator;
    NSArray *_localRecords;
}

@property (readonly, nonatomic) NSArray *t_localRecords;

+ (BOOL)supportsSecureCoding;
+ (id)desiredKeys;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void)executeWithContext:(id)a0 delegate:(id)a1 qualityOfService:(long long)a2;
- (void).cxx_destruct;
- (BOOL)mergeLocalRecord:(id)a0 withRemoteRecord:(id)a1;
- (BOOL)canCoalesceWithCommand:(id)a0;
- (void)coalesceWithCommand:(id)a0;
- (id)initWithLocalRecords:(id)a0 merge:(BOOL)a1;
- (id)initWithLocalRecordsGenerator:(id /* block */)a0 merge:(BOOL)a1;

@end
