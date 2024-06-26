@class NSString;

@interface VMVoicemailTranscriptSegment : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long confidenceRating;
@property (readonly, copy, nonatomic) NSString *substring;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } substringRange;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) float confidence;
@property (readonly, nonatomic) double timestamp;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTranscriptionSegment:(id)a0 confidenceThreshold:(float)a1;

@end
