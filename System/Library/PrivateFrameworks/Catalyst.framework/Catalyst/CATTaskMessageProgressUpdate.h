@class CATTaskProgress;

@interface CATTaskMessageProgressUpdate : CATTaskMessage

@property (copy, nonatomic) CATTaskProgress *progress;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTaskUUID:(id)a0 progress:(id)a1;
- (void).cxx_destruct;

@end
