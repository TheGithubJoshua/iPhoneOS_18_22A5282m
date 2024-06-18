@class NSData, NSString;

@interface MRNowPlayingArtworkImage : MRNowPlayingArtwork

@property (readonly, copy, nonatomic) NSData *imageData;
@property (readonly, copy, nonatomic) NSString *mimeType;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)hasArtworkData;
- (unsigned int)type;
- (id)copyImageData;
- (id)initWithImageData:(id)a0 mimeType:(id)a1;

@end
