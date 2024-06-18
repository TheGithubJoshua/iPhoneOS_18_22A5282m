@class MFMessageBody, MFMutableMessageHeaders;

@interface MFOutgoingMessage : MFMailMessage {
    MFMessageBody *_messageBody;
    MFMutableMessageHeaders *_messageHeaders;
}

- (id)messageBody;
- (void).cxx_destruct;
- (unsigned long long)messageSize;
- (id)messageStore;
- (id)headers;
- (id)messageData;
- (void)setMessageBody:(id)a0;
- (id)headersIfAvailable;
- (id)messageBodyIfAvailable;
- (BOOL)messageData:(id *)a0 messageSize:(unsigned long long *)a1 isComplete:(BOOL *)a2 downloadIfNecessary:(BOOL)a3;
- (id)messageDataHolder;
- (BOOL)messageDataHolder:(id *)a0 messageSize:(unsigned long long *)a1 isComplete:(BOOL *)a2 downloadIfNecessary:(BOOL)a3;
- (id)mutableHeaders;
- (void)setMutableHeaders:(id)a0;

@end
