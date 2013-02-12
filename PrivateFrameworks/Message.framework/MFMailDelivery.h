/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class DeliveryAccount, MailAccount, Message, MutableMessageHeaders, NSArray, NSDictionary, NSString, PlainTextDocument;

@interface MFMailDelivery : NSObject {
    unsigned int _threaded : 1;
    unsigned int _useCellDataOnly : 1;
    unsigned int __UNUSED__ : 24;
    unsigned int _status : 4;
    DeliveryAccount *_account;
    MailAccount *_archiveAccount;
    NSDictionary *_compositionSpecification;
    id _delegate;
    MutableMessageHeaders *_headers;
    NSString *_htmlString;
    Message *_message;
    NSArray *_mixedContent;
    NSArray *_otherStringsAndAttachments;
    PlainTextDocument *_plainTextAlternative;
    BOOL _textPartsAreHTML;
}

@property(retain) NSDictionary * compositionSpecification;

+ (BOOL)deliverMessage:(id)arg1;
+ (id)newWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4;
+ (id)newWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3;
+ (id)newWithMessage:(id)arg1;

- (id)account;
- (void)archive;
- (id)archiveAccount;
- (id)compositionSpecification;
- (void)dealloc;
- (id)delegate;
- (void)deliverAsynchronously;
- (int)deliverMessageData:(id)arg1 toRecipients:(id)arg2;
- (int)deliverSynchronously;
- (int)deliveryStatus;
- (id)headersForDelivery;
- (id)initWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4;
- (id)initWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3;
- (id)initWithMessage:(id)arg1;
- (id)message;
- (id)newMessageWriter;
- (id)originalHeaders;
- (void)setAccount:(id)arg1;
- (void)setArchiveAccount:(id)arg1;
- (void)setCellDataOnly:(BOOL)arg1;
- (void)setCompositionSpecification:(id)arg1;
- (void)setDelegate:(id)arg1;
- (BOOL)shouldEncryptMessage;
- (BOOL)shouldSignMessage;

@end
