@class EDResources, EDWorkbook;
@protocol TCCancelDelegate;

@interface EBState : NSObject {
    void *mXlLinkTable;
    void *mXlNameTable;
    void *mSheetNames;
    void *mXlFormulaProcessor;
    EDWorkbook *mWorkbook;
    EDResources *mResources;
}

@property (readonly, nonatomic) id<TCCancelDelegate> cancelDelegate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)resources;
- (void)setResources:(id)a0;
- (BOOL)isCancelled;
- (id)initWithCancelDelegate:(id)a0;
- (void)setWorkbook:(id)a0;
- (void *)sheetNames;
- (id)workbook;
- (void *)xlFormulaProcessor;
- (void *)xlLinkTable;
- (void *)xlNameTable;

@end
