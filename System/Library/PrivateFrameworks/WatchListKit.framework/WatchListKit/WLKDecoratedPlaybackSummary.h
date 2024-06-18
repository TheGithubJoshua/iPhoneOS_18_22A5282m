@class NSString, WLKPlaybackSummary;

@interface WLKDecoratedPlaybackSummary : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) WLKPlaybackSummary *summary;
@property (readonly, copy, nonatomic) NSString *canonicalID;

- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSummary:(id)a0 canonicalID:(id)a1;

@end
