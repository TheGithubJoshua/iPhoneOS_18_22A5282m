@class HMDStructuredWriter;

@interface HMDBufferingStructureDataFilter : HMDStructuredDataFoundationWriter {
    HMDStructuredWriter *_writer;
    id /* block */ _block;
}

- (void)failWithError:(id)a0;
- (void).cxx_destruct;
- (id)error;
- (id)initWithUnderlyingWriter:(id)a0 block:(id /* block */)a1;
- (void)emitRootValue:(id)a0;

@end
