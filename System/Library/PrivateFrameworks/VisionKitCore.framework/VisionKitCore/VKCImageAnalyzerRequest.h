@class NSDate, NSString, UIImage, NSURL, NSArray, VKCImageAnalysis, CIImage, CLLocation;

@interface VKCImageAnalyzerRequest : NSObject <NSCopying, VKFeedbackAssetsProvider>

@property (nonatomic) unsigned long long requestType;
@property (retain, nonatomic) VKCImageAnalysis *inProcessAnalysis;
@property (nonatomic) BOOL isMultiPartAnalysis;
@property (nonatomic) long long imageOrientation;
@property (nonatomic) unsigned int cgimageOrientation;
@property (nonatomic) unsigned long long analysisTypes;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) CIImage *ciImage;
@property (nonatomic) struct CGImage { } *cgImageRef;
@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *localIdentifier;
@property (nonatomic) struct CGSize { double width; double height; } photosImageSize;
@property (nonatomic) int requestID;
@property (nonatomic) int madRequestID;
@property (retain, nonatomic) NSDate *processDate;
@property (nonatomic) BOOL cancelled;
@property (nonatomic) BOOL _wantsRectangleDetection;
@property (copy, nonatomic) CLLocation *location;
@property (copy, nonatomic) NSURL *imageURL;
@property (copy, nonatomic) NSURL *pageURL;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (copy, nonatomic) id /* block */ updateHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSArray *defaultBarcodeSymbologies;
@property (nonatomic) double screenScale;
@property (nonatomic) unsigned long long queryID;
@property (retain, nonatomic) NSArray *locales;
@property (retain, nonatomic) NSArray *barcodeSymbologies;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageSize;
@property (nonatomic) unsigned long long imageSource;
@property (readonly, nonatomic) unsigned long long requestedAnalysisTypes;
@property (nonatomic) unsigned long long processedAnalysisTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)newQueryIDForParsec;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCGImage:(struct CGImage { } *)a0 orientation:(long long)a1 requestType:(unsigned long long)a2;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(long long)a1 requestType:(unsigned long long)a2;
- (id)initWithLocalIdentifier:(id)a0 photoLibraryURL:(id)a1 imageSize:(struct CGSize { double x0; double x1; })a2 requestType:(unsigned long long)a3;
- (id)shortLoggingDescription;
- (id)blockingCreatePNGAssetDataWithError:(id *)a0;
- (struct CGImage { } *)blockingGenerateCGImage;
- (id)createVNRequestHandler;
- (struct CGSize { double x0; double x1; })imageSizeFromCGImageSource:(struct CGImageSource { } *)a0;
- (id)initWithCIImage:(id)a0 orientation:(long long)a1 requestType:(unsigned long long)a2;
- (id)initWithImage:(id)a0 orientation:(long long)a1 requestType:(unsigned long long)a2;
- (id)initWithImage:(id)a0 requestType:(unsigned long long)a1;
- (id)initWithImageURL:(id)a0 requestType:(unsigned long long)a1;
- (id)initWithLocalIdentifier:(id)a0 photoLibraryURL:(id)a1 cgImage:(struct CGImage { } *)a2 orientation:(long long)a3 requestType:(unsigned long long)a4;
- (id)initWithLocalIdentifier:(id)a0 photoLibraryURL:(id)a1 pixelBuffer:(struct __CVBuffer { } *)a2 orientation:(long long)a3 requestType:(unsigned long long)a4;
- (id)initWithView:(id)a0 requestType:(unsigned long long)a1;
- (BOOL)isPhotosAssetRequest;
- (id)madRequests;
- (id)processedBarcodeSymbologies;
- (id)requestIDValue;
- (BOOL)saveAssetsToFeedbackAttachmentsFolder:(id)a0 error:(id *)a1;
- (struct __CVBuffer { } *)tempPixelBufferRef;
- (id)viImageType;

@end
