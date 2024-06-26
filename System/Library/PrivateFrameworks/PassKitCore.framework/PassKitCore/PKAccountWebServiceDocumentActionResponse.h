@class NSData, NSString;

@interface PKAccountWebServiceDocumentActionResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) NSData *documentPDFData;
@property (readonly, copy, nonatomic) NSString *documentDataFilename;
@property (readonly, copy, nonatomic) NSString *documentDataHash;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
