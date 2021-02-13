#include "Discord.h"

void Discord::OnReady(Ready &ready) {
	Log::Print(Info, "Client is ready.");
}

void Discord::OnHeartBeat() {
	Log::Print(Info, "Client heartbeat.");
}

void Discord::OnMessageCreate(const Message &message) {
	Log::Print(Info, "Message created.");
}

void Discord::OnMessageUpdate(const Message &message) {
	Log::Print(Info, "Message update.");
}

void Discord::OnMessageDelete(const MessageDeleteArg &message) {
	Log::Print(Info, "Message delete.");
}

void Discord::OnChannelCreate(const Channel &channel) {
	Log::Print(Info, "Channel created.");
}

void Discord::OnChannelUpdate(const Channel &channel) {
}

void Discord::OnChannelDelete(const Channel &channel) {
}

void Discord::OnVoiceState(const Voice &voice) {
	Log::Print(Info, "Voice state.");
}