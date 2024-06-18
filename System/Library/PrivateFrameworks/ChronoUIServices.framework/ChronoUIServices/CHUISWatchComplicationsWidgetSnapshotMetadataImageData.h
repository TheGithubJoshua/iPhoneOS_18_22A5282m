@class UIImage, NSString, NSFileHandle;

@interface CHUISWatchComplicationsWidgetSnapshotMetadataImageData : NSObject <NSCopying, BSXPCSecureCoding> {
    NSFileHandle *_imageFileHandle;
    UIImage *_image;
}

@property (readonly, retain, nonatomic) UIImage *image;
@property (readonly, copy, nonatomic) NSString *symbolName;
@property (readonly, nonatomic, getter=isPrivateSymbol) BOOL privateSymbol;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithImage:(id)a0;
- (id)initWithSymbolName:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)imageFileHandle;
- (id)copyForEncodingAtUrl:(id)a0;
- (id)initWithPrivateSymbolName:(id)a0;

@end
