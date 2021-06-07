# include "../../../sdk_sources/ctp/include/ThostFtdcMdApi.h"
# include "../../../sdk_sources/ctp/include/ThostFtdcTraderApi.h"
# include "../../../sdk_sources/ctp/include/ThostFtdcUserApiDataType.h"
# include "../../../sdk_sources/ctp/include/ThostFtdcUserApiStruct.h"

static CThostFtdcMdApi * CThostFtdcMdApiCreateFtdcMdApi(CThostFtdcMdApi * self , const char * pszFlowPath,const bool bIsUsingUdp,const bool bIsMulticast) {
    auto instance = static_cast<CThostFtdcMdApi*>(self);
    return instance->CreateFtdcMdApi(pszFlowPath, bIsUsingUdp, bIsMulticast);
}
        
static const char * CThostFtdcMdApiGetApiVersion(CThostFtdcMdApi * self ) {
    auto instance = static_cast<CThostFtdcMdApi*>(self);
    return instance->GetApiVersion();
}
        
void CThostFtdcMdApiRelease(CThostFtdcMdApi * self ) {
    auto instance = static_cast<CThostFtdcMdApi*>(self);
    instance->Release();
}
        
void CThostFtdcMdApiInit(CThostFtdcMdApi * self ) {
    auto instance = static_cast<CThostFtdcMdApi*>(self);
    instance->Init();
}
        
int CThostFtdcMdApiJoin(CThostFtdcMdApi * self ) {
    auto instance = static_cast<CThostFtdcMdApi*>(self);
    return instance->Join();
}
        
const char * CThostFtdcMdApiGetTradingDay(CThostFtdcMdApi * self ) {
    auto instance = static_cast<CThostFtdcMdApi*>(self);
    return instance->GetTradingDay();
}
        
void CThostFtdcMdApiRegisterFront(CThostFtdcMdApi * self , char * pszFrontAddress) {
    auto instance = static_cast<CThostFtdcMdApi*>(self);
    instance->RegisterFront(pszFrontAddress);
}
        
void CThostFtdcMdApiRegisterNameServer(CThostFtdcMdApi * self , char * pszNsAddress) {
    auto instance = static_cast<CThostFtdcMdApi*>(self);
    instance->RegisterNameServer(pszNsAddress);
}
        
void CThostFtdcMdApiRegisterFensUserInfo(CThostFtdcMdApi * self , CThostFtdcFensUserInfoField * pFensUserInfo) {
    auto instance = static_cast<CThostFtdcMdApi*>(self);
    instance->RegisterFensUserInfo(pFensUserInfo);
}
        
void CThostFtdcMdApiRegisterSpi(CThostFtdcMdApi * self , CThostFtdcMdSpi * pSpi) {
    auto instance = static_cast<CThostFtdcMdApi*>(self);
    instance->RegisterSpi(pSpi);
}
        
int CThostFtdcMdApiSubscribeMarketData(CThostFtdcMdApi * self , char * ppInstrumentID[],int nCount) {
    auto instance = static_cast<CThostFtdcMdApi*>(self);
    return instance->SubscribeMarketData(ppInstrumentID, nCount);
}
        
int CThostFtdcMdApiUnSubscribeMarketData(CThostFtdcMdApi * self , char * ppInstrumentID[],int nCount) {
    auto instance = static_cast<CThostFtdcMdApi*>(self);
    return instance->UnSubscribeMarketData(ppInstrumentID, nCount);
}
        
int CThostFtdcMdApiSubscribeForQuoteRsp(CThostFtdcMdApi * self , char * ppInstrumentID[],int nCount) {
    auto instance = static_cast<CThostFtdcMdApi*>(self);
    return instance->SubscribeForQuoteRsp(ppInstrumentID, nCount);
}
        
int CThostFtdcMdApiUnSubscribeForQuoteRsp(CThostFtdcMdApi * self , char * ppInstrumentID[],int nCount) {
    auto instance = static_cast<CThostFtdcMdApi*>(self);
    return instance->UnSubscribeForQuoteRsp(ppInstrumentID, nCount);
}
        
int CThostFtdcMdApiReqUserLogin(CThostFtdcMdApi * self , CThostFtdcReqUserLoginField * pReqUserLoginField,int nRequestID) {
    auto instance = static_cast<CThostFtdcMdApi*>(self);
    return instance->ReqUserLogin(pReqUserLoginField, nRequestID);
}
        
int CThostFtdcMdApiReqUserLogout(CThostFtdcMdApi * self , CThostFtdcUserLogoutField * pUserLogout,int nRequestID) {
    auto instance = static_cast<CThostFtdcMdApi*>(self);
    return instance->ReqUserLogout(pUserLogout, nRequestID);
}
        
int CThostFtdcMdApiReqQryMulticastInstrument(CThostFtdcMdApi * self , CThostFtdcQryMulticastInstrumentField * pQryMulticastInstrument,int nRequestID) {
    auto instance = static_cast<CThostFtdcMdApi*>(self);
    return instance->ReqQryMulticastInstrument(pQryMulticastInstrument, nRequestID);
}
        extern "C" void RustCtpActionMdOnFrontDisconnected(void *rust_call_object, int nReason); 
extern "C" void RustCtpActionMdOnHeartBeatWarning(void *rust_call_object, int nTimeLapse); 
extern "C" void RustCtpActionMdOnRspUserLogin(void *rust_call_object, CThostFtdcRspUserLoginField * pRspUserLogin,CThostFtdcRspInfoField * pRspInfo,int nRequestID,bool bIsLast); 
extern "C" void RustCtpActionMdOnRspUserLogout(void *rust_call_object, CThostFtdcUserLogoutField * pUserLogout,CThostFtdcRspInfoField * pRspInfo,int nRequestID,bool bIsLast); 
extern "C" void RustCtpActionMdOnRspQryMulticastInstrument(void *rust_call_object, CThostFtdcMulticastInstrumentField * pMulticastInstrument,CThostFtdcRspInfoField * pRspInfo,int nRequestID,bool bIsLast); 
extern "C" void RustCtpActionMdOnRspError(void *rust_call_object, CThostFtdcRspInfoField * pRspInfo,int nRequestID,bool bIsLast); 
extern "C" void RustCtpActionMdOnRspSubMarketData(void *rust_call_object, CThostFtdcSpecificInstrumentField * pSpecificInstrument,CThostFtdcRspInfoField * pRspInfo,int nRequestID,bool bIsLast); 
extern "C" void RustCtpActionMdOnRspUnSubMarketData(void *rust_call_object, CThostFtdcSpecificInstrumentField * pSpecificInstrument,CThostFtdcRspInfoField * pRspInfo,int nRequestID,bool bIsLast); 
extern "C" void RustCtpActionMdOnRspSubForQuoteRsp(void *rust_call_object, CThostFtdcSpecificInstrumentField * pSpecificInstrument,CThostFtdcRspInfoField * pRspInfo,int nRequestID,bool bIsLast); 
extern "C" void RustCtpActionMdOnRspUnSubForQuoteRsp(void *rust_call_object, CThostFtdcSpecificInstrumentField * pSpecificInstrument,CThostFtdcRspInfoField * pRspInfo,int nRequestID,bool bIsLast); 
extern "C" void RustCtpActionMdOnRtnDepthMarketData(void *rust_call_object, CThostFtdcDepthMarketDataField * pDepthMarketData); 
extern "C" void RustCtpActionMdOnRtnForQuoteRsp(void *rust_call_object, CThostFtdcForQuoteRspField * pForQuoteRsp); 

class CtpMdSpi: CThostFtdcMdSpi {
public:
    void *rust_call_object ;
    
    CtpMdSpi(void *rust_call_object);
                
            
     void OnFrontDisconnected(int nReason){
          RustCtpActionMdOnFrontDisconnected(this->rust_call_object, nReason);            
     }
            
     void OnHeartBeatWarning(int nTimeLapse){
          RustCtpActionMdOnHeartBeatWarning(this->rust_call_object, nTimeLapse);            
     }
            
     void OnRspUserLogin(CThostFtdcRspUserLoginField * pRspUserLogin,CThostFtdcRspInfoField * pRspInfo,int nRequestID,bool bIsLast){
          RustCtpActionMdOnRspUserLogin(this->rust_call_object, pRspUserLogin, pRspInfo, nRequestID, bIsLast);            
     }
            
     void OnRspUserLogout(CThostFtdcUserLogoutField * pUserLogout,CThostFtdcRspInfoField * pRspInfo,int nRequestID,bool bIsLast){
          RustCtpActionMdOnRspUserLogout(this->rust_call_object, pUserLogout, pRspInfo, nRequestID, bIsLast);            
     }
            
     void OnRspQryMulticastInstrument(CThostFtdcMulticastInstrumentField * pMulticastInstrument,CThostFtdcRspInfoField * pRspInfo,int nRequestID,bool bIsLast){
          RustCtpActionMdOnRspQryMulticastInstrument(this->rust_call_object, pMulticastInstrument, pRspInfo, nRequestID, bIsLast);            
     }
            
     void OnRspError(CThostFtdcRspInfoField * pRspInfo,int nRequestID,bool bIsLast){
          RustCtpActionMdOnRspError(this->rust_call_object, pRspInfo, nRequestID, bIsLast);            
     }
            
     void OnRspSubMarketData(CThostFtdcSpecificInstrumentField * pSpecificInstrument,CThostFtdcRspInfoField * pRspInfo,int nRequestID,bool bIsLast){
          RustCtpActionMdOnRspSubMarketData(this->rust_call_object, pSpecificInstrument, pRspInfo, nRequestID, bIsLast);            
     }
            
     void OnRspUnSubMarketData(CThostFtdcSpecificInstrumentField * pSpecificInstrument,CThostFtdcRspInfoField * pRspInfo,int nRequestID,bool bIsLast){
          RustCtpActionMdOnRspUnSubMarketData(this->rust_call_object, pSpecificInstrument, pRspInfo, nRequestID, bIsLast);            
     }
            
     void OnRspSubForQuoteRsp(CThostFtdcSpecificInstrumentField * pSpecificInstrument,CThostFtdcRspInfoField * pRspInfo,int nRequestID,bool bIsLast){
          RustCtpActionMdOnRspSubForQuoteRsp(this->rust_call_object, pSpecificInstrument, pRspInfo, nRequestID, bIsLast);            
     }
            
     void OnRspUnSubForQuoteRsp(CThostFtdcSpecificInstrumentField * pSpecificInstrument,CThostFtdcRspInfoField * pRspInfo,int nRequestID,bool bIsLast){
          RustCtpActionMdOnRspUnSubForQuoteRsp(this->rust_call_object, pSpecificInstrument, pRspInfo, nRequestID, bIsLast);            
     }
            
     void OnRtnDepthMarketData(CThostFtdcDepthMarketDataField * pDepthMarketData){
          RustCtpActionMdOnRtnDepthMarketData(this->rust_call_object, pDepthMarketData);            
     }
            
     void OnRtnForQuoteRsp(CThostFtdcForQuoteRspField * pForQuoteRsp){
          RustCtpActionMdOnRtnForQuoteRsp(this->rust_call_object, pForQuoteRsp);            
     }
            
protected:
    ~CtpMdSpi(){}
};

CtpMdSpi::CtpMdSpi(void *rust_call_object) : rust_call_object(rust_call_object) {};
