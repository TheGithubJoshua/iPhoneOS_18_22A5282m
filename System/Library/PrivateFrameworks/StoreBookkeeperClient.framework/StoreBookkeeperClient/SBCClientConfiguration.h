@class SBCPlaybackPositionDomain;

@interface SBCClientConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) SBCPlaybackPositionDomain *playbackPositionDomain;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPlaybackPositionDomain:(id)a0;

@end
