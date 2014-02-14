#include <iostream>
#include <gtk/gtk.h>
#include "Item.hpp"

using namespace std;



int main(int argc, char* argv[]) {
	Item item("AA", "AA");

	gtk_init (&argc, &argv);
	GtkWidget *window, *label;

	// CRIANDO JANELA
	window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
	gtk_widget_show(window);
	gtk_window_set_decorated(GTK_WINDOW(window), FALSE);
	g_signal_connect(window, "delete-event", G_CALLBACK(gtk_main_quit), NULL);

	label = gtk_label_new(item.getLocal().c_str());
	gtk_label_set_text(GTK_LABEL(label), item.getLocal().c_str());
	gtk_container_add(GTK_CONTAINER(window), label);
	gtk_widget_show_all(window);


	gtk_main ();
	return 0;
}
