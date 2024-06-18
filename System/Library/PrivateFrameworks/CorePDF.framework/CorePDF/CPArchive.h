@class NSData, NSMutableString;

@interface CPArchive : NSObject <CPDisposable> {
    struct __CFArray { } *selections;
    struct __CFArray { } *imageNodes;
    NSMutableString *plainText;
    NSMutableString *htmlString;
    NSMutableString *htmlStringNoImages;
    NSData *webArchiveData;
}

- (id)init;
- (void)finalize;
- (void)dispose;
- (void)dealloc;
- (id)webArchiveData;
- (id)html;
- (id)plainText;
- (void)addSelection:(struct CGPDFSelection { } *)a0;

@end
