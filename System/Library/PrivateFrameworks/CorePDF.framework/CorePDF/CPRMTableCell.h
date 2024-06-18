@class CPRMTable, NSString;

@interface CPRMTableCell : NSObject {
    NSString *_contents;
}

@property (readonly) struct CGPDFPage { } *page;
@property (retain) CPRMTableCell *nextCellInColumn;
@property (retain) CPRMTableCell *nextCellInRow;
@property CPRMTable *table;
@property struct CGPDFNode { } *tableCellNode;

- (struct CGPDFPage { } *)page;
- (id)contents;
- (struct CGColor { } *)backgroundColor;
- (unsigned long long)row;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)dealloc;
- (unsigned long long)column;

@end
