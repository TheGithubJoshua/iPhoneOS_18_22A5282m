@interface NUImageExportFormatTIFF : NUImageExportFormat

@property long long pixelType;
@property long long compression;
@property BOOL preserveAlpha;

- (id)fileType;
- (id)init;
- (int)depth;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addImageDestinationOptionsToImageProperties:(id)a0;
- (int)renderFormat;

@end
