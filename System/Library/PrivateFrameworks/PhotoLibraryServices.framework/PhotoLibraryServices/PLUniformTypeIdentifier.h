@class NSString;

@interface PLUniformTypeIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned int wellKnownFileType;
@property (readonly, nonatomic) short conformanceHint;
@property (readonly, nonatomic) NSString *compactRepresentation;
@property (readonly, copy, nonatomic) NSString *identifier;

+ (BOOL)isPlayableVideoTypeIdentifierString:(id)a0;
+ (id)utiWithCompactRepresentation:(id)a0 conformanceHint:(short)a1;
+ (id)videoComplementUniformTypeIdentifier;
+ (id)quicktimeUniformTypeIdentifier;
+ (id)utiWithIdentifier:(id)a0;
+ (id)plistUniformTypeIdentifier;
+ (id)jpegUniformTypeIdentifier;

- (BOOL)isPlayableVideo;
- (BOOL)isDynamic;
- (BOOL)conformsToMovie;
- (unsigned long long)hash;
- (BOOL)isLosslessEncoding;
- (BOOL)isPrimaryImageFormat;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)conformsToRawImage;
- (BOOL)conformsToData;
- (BOOL)isEqualToUniformTypeIdentifier:(id)a0;
- (id)preferredExtension;
- (BOOL)conformsToAudio;
- (BOOL)conformsToJPEG;
- (BOOL)conformsToImage;
- (id)initWithIdentifier:(id)a0 compactRepresentation:(id)a1 conformanceHint:(short)a2;

@end
