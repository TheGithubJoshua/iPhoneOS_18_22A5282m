@class NSArray;

@interface FCRemoveRecordsCommand : FCCommand {
    NSArray *_recordIDs;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithRecordIDs:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)executeWithContext:(id)a0 delegate:(id)a1 qualityOfService:(long long)a2;
- (void).cxx_destruct;
- (BOOL)canCoalesceWithCommand:(id)a0;
- (void)coalesceWithCommand:(id)a0;

@end
